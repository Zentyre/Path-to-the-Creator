#include "..//Steam/steam_api.h"
using namespace std;
// Forward declarations for the callback functions
void YourLeaderboardFindCallbackFunction(LeaderboardFindResult_t* pCallback, bool bIOFailure, void* pYourClass);
void YourLeaderboardDownloadCallbackFunction(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure, void* pYourClass);

// Forward declarations for the callback functions
void YourLeaderboardFindCallbackFunction(LeaderboardFindResult_t* pCallback, bool bIOFailure, void* pYourClass);
void YourLeaderboardDownloadCallbackFunction(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure, void* pYourClass);

class YourClass {
public:
    // Function to request leaderboard data
    void RequestLeaderboardData(const char* leaderboardName, int rangeStart, int rangeEnd) {
        // Set up a callback to handle the result
        m_LeaderboardFindResult.Set(SteamUserStats()->FindLeaderboard(leaderboardName), &YourLeaderboardFindCallbackFunction, this);
    }

private:
    CCallResult<YourClass, LeaderboardFindResult_t> m_LeaderboardFindResult;
    CCallResult<YourClass, LeaderboardScoresDownloaded_t> m_LeaderboardScoresDownloaded;

    // Non-static callback functions
    void YourLeaderboardFindCallbackFunction(LeaderboardFindResult_t* pCallback, bool bIOFailure) {
        if (pCallback->m_bLeaderboardFound) {
            // The leaderboard was found, and the data is available in pCallback
            // Now you can proceed to download the leaderboard entries

            SteamAPICall_t hSteamAPICall = SteamUserStats()->DownloadLeaderboardEntries(
                pCallback->m_hSteamLeaderboard,
                k_ELeaderboardDataRequestGlobal,  // Request global leaderboard data
                1,  // Starting rank
                10  // Ending rank
            );

            // Set up a callback to handle the download result
            m_LeaderboardScoresDownloaded.Set(hSteamAPICall, &YourLeaderboardDownloadCallbackFunction, this);
        }
        else {
            // Handle error: The leaderboard find operation failed
        }
    }

    // Non-static callback function for leaderboard download
    static void YourLeaderboardDownloadCallbackFunction(LeaderboardScoresDownloaded_t* pCallback, bool bIOFailure) {
        if (pCallback->m_hSteamLeaderboardEntries != NULL) {
            // The download was successful, and the data is available in pCallback
            // Extract and process the leaderboard entries as needed

            for (int i = 0; i < pCallback->m_cEntryCount; ++i) {
                LeaderboardEntry_t entry;
                if (SteamUserStats()->GetDownloadedLeaderboardEntry(pCallback->m_hSteamLeaderboardEntries, i, &entry, nullptr, 0)) {
                    // Process the leaderboard entry (e.g., display it in the UI)
                }
            }
        }
        else {
            // Handle error: The download failed
        }
    }
};