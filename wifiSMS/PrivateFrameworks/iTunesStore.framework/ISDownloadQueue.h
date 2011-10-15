/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, <ISDownloadQueueDelegate>;



@interface ISDownloadQueue : NSObject 
{
    NSInteger _assetTypes;
    <ISDownloadQueueDelegate> *_delegate;
    NSMutableArray *_downloads;
    NSInteger _lastUpdatedIndex;
    NSMutableArray *_placeholders;
    NSMutableArray *_preorders;
    BOOL _registeredWithDaemon;
}

@property(retain,readonly) NSArray *preorders; /* unknown property attribute: V_preorders */
@property(retain,readonly) NSArray *placeholderDownloads; /* unknown property attribute: V_placeholders */
@property(retain,readonly) NSArray *downloads; /* unknown property attribute: V_downloads */
@property <ISDownloadQueueDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger assetTypes; /* unknown property attribute: V_assetTypes */

+ (id)bundlesInstalledSinceLastSync;
+ (id)downloadQueueForAssetType:(NSInteger)arg1;

- (id)initWithAssetTypes:(NSInteger)arg1;
- (void)dealloc;
- (void)addDownload:(id)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (BOOL)checkQueue;
- (BOOL)removeDownload:(id)arg1;
- (BOOL)startPreOrderDownload:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_daemonExitedMainThread:(id)arg1;
- (void)_downloadsAdded:(id)arg1;
- (void)_downloadsChanged:(id)arg1;
- (void)_downloadsRemoved:(id)arg1;
- (void)_downloadsReplaced:(id)arg1;
- (void)_downloadStatusChanged:(id)arg1;
- (void)_preOrdersChanged:(id)arg1;
- (void)_checkIn;
- (void)_checkOut;
- (id)_createRepresentativeDownloadForPreOrder:(id)arg1;
- (void)_filterPlaceholderDownloads;
- (NSInteger)_indexOfDownloadWithIdentifier:(unsigned long long)arg1;
- (void)_registerWithDaemon;
- (id)preorders;
- (id)placeholderDownloads;
- (id)downloads;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)assetTypes;
- (void)setAssetTypes:(NSInteger)arg1;

@end