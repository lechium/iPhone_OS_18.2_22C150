//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber, NSString, NSUserDefaults;

@interface ASCDefaults : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSCache *_cachedValues;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
}

+ (id)daemonDefaults;	// IMP=0x002000000000df43
- (void).cxx_destruct;	// IMP=0x002000000000ee60
@property(readonly, copy, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSCache *cachedValues; // @synthesize cachedValues=_cachedValues;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000000ed95
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ec8a
- (unsigned long long)hash;	// IMP=0x001000000000ec0f
@property(copy, nonatomic) NSString *jsVersion;
@property(nonatomic) _Bool preferInternalJS;
@property(copy, nonatomic) NSString *debugPackageURL;
@property(nonatomic) _Bool forceStandaloneWatch;
@property(nonatomic) _Bool enableWebInspector;
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property(nonatomic) _Bool disableShutdownTimer;
@property(nonatomic) _Bool forceRightToLeftLayout;
@property(copy, nonatomic) NSString *storefrontLocaleID;
- (id)objectForKey:(id)arg1;	// IMP=0x001000000000e2dc
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000e25a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000e131
- (void)dealloc;	// IMP=0x001000000000e0b6
- (id)initWithBundleID:(id)arg1;	// IMP=0x001000000000dfaf

@end
