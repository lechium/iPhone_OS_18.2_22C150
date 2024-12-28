//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection;

@interface MRDUIClient : NSObject
{
    _Bool _hasLockScreenAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringAssertion;	// 10 = 0xa
    _Bool _hasGroupSessionNearbyAssertion;	// 11 = 0xb
    _Bool _hasRouteRecommendationAssertion;	// 12 = 0xc
    _Bool _hasNowPlayingActivityAssertion;	// 13 = 0xd
    _Bool _hasGroupSessionLowPowerPlatterAssertion;	// 14 = 0xe
    NSArray *_routeRecommendationIdentifiers;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001331dd
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool hasGroupSessionLowPowerPlatterAssertion; // @synthesize hasGroupSessionLowPowerPlatterAssertion=_hasGroupSessionLowPowerPlatterAssertion;
@property(retain, nonatomic) NSArray *routeRecommendationIdentifiers; // @synthesize routeRecommendationIdentifiers=_routeRecommendationIdentifiers;
@property(nonatomic) _Bool hasNowPlayingActivityAssertion; // @synthesize hasNowPlayingActivityAssertion=_hasNowPlayingActivityAssertion;
@property(nonatomic) _Bool hasRouteRecommendationAssertion; // @synthesize hasRouteRecommendationAssertion=_hasRouteRecommendationAssertion;
@property(nonatomic) _Bool hasGroupSessionNearbyAssertion; // @synthesize hasGroupSessionNearbyAssertion=_hasGroupSessionNearbyAssertion;
@property(nonatomic) _Bool hasScreenMirroringAssertion; // @synthesize hasScreenMirroringAssertion=_hasScreenMirroringAssertion;
- (void);	// IMP=0x001000000013314b
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenAssertion; // @synthesize hasLockScreenAssertion=_hasLockScreenAssertion;
- (void)nearbyGroupSessionDismissed:(id)arg1;	// IMP=0x00100000001330c7
- (void)routeRecommendationDismissed;	// IMP=0x001000000013308a
- (id)remoteObjectProxy;	// IMP=0x0010000000133074
- (void)dealloc;	// IMP=0x0010000000133003
- (id)description;	// IMP=0x0010000000132fc2
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x0010000000132f29

@end
