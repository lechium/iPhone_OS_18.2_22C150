//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableArray, NSString;

@interface CLAppTileDataProvider : CLIntersiloService
{
    struct unique_ptr<CLTilesManager_Type::Client, std::default_delete<CLTilesManager_Type::Client>> _tilesManagerClient;	// 8 = 0x8
    _Bool _fIsRegisteredForTileDownload;	// 16 = 0x10
    NSMutableArray *_activeRequests;	// 24 = 0x18
    CLTimer *_activeRequestCleanupTimer;	// 32 = 0x20
}

+ (id)getSilo;	// IMP=0x0020000000f6df23
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000f6df0a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000f6dead
- (id).cxx_construct;	// IMP=0x0020000000f70bd9
- (void).cxx_destruct;	// IMP=0x0010000000f70bb1
@property(nonatomic) CLTimer *activeRequestCleanupTimer; // @synthesize activeRequestCleanupTimer=_activeRequestCleanupTimer;
@property(nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(nonatomic) _Bool fIsRegisteredForTileDownload; // @synthesize fIsRegisteredForTileDownload=_fIsRegisteredForTileDownload;
- (void)onTileWasDownloadedNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000f7012f
- (void)fetchAppsForAreaAtLatitude:(double)arg1 longitude:(double)arg2 radius:(float)arg3 includeRegionalApps:(_Bool)arg4 marqueeAppsOnly:(_Bool)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000f6f651
- (id)getAppsForAreaAtLatitude:(double)arg1 longitude:(double)arg2 radius:(float)arg3 includeRegionalApps:(_Bool)arg4 marqueeAppsOnly:(_Bool)arg5;	// IMP=0x0010000000f6e97e
- (void)endService;	// IMP=0x0010000000f6e742
- (void)beginService;	// IMP=0x0010000000f6dfbc
- (id)init;	// IMP=0x0010000000f6df7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

