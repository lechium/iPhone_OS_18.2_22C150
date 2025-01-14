//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INIntent, NSString;

@protocol CCUIControlIntentStorage
- (INIntent *)intentWithBundleIdentifier:(NSString *)arg1 dataSourceIdentifier:(NSString *)arg2 defaultIntentProvider:(INIntent * (^)(void))arg3;
- (void)deleteIntentWithBundleIdentifier:(NSString *)arg1 dataSourceIdentifier:(NSString *)arg2;
- (void)storeIntent:(INIntent *)arg1 bundleIdentifier:(NSString *)arg2 dataSourceIdentifier:(NSString *)arg3;
@end

