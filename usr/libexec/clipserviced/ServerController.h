//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppLinkResolver, AppManager, CPSAppInstaller, ClipMetadataManager, NSString, NSXPCListener;
@protocol CPSAppInfoFetching;

@interface ServerController : NSObject
{
    AppManager *_appManager;	// 8 = 0x8
    id <CPSAppInfoFetching> _appInfoFetcher;	// 16 = 0x10
    CPSAppInstaller *_appInstaller;	// 24 = 0x18
    AppLinkResolver *_appLinkResolver;	// 32 = 0x20
    ClipMetadataManager *_clipMetadataManager;	// 40 = 0x28
    NSXPCListener *_listener;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x0020000000001ac4
- (void).cxx_destruct;	// IMP=0x0020000000001ee9
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001d96
- (void)start;	// IMP=0x0010000000001d2a
- (id)init;	// IMP=0x0010000000001b19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

