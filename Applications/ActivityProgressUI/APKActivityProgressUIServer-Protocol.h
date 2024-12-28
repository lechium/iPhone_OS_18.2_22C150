//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APKActivityProgress, NSNumber, NSString, NSUUID;

@protocol APKActivityProgressUIServer <NSObject>
- (void)updateActivityName:(NSString *)arg1 activityDescription:(NSString *)arg2 withHaptic:(NSNumber *)arg3 forIdentifier:(NSUUID *)arg4;
- (void)updateActivityName:(NSString *)arg1 activityDescription:(NSString *)arg2 forIdentifier:(NSUUID *)arg3;
- (void)updateProgress:(APKActivityProgress *)arg1 forIdentifier:(NSUUID *)arg2;
- (void)startActivityForIdentifier:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 activityName:(NSString *)arg3 activityDescription:(NSString *)arg4 progress:(APKActivityProgress *)arg5;
- (void)startActivityForIdentifier:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 imageUTI:(NSString *)arg3 activityName:(NSString *)arg4 activityDescription:(NSString *)arg5 progress:(APKActivityProgress *)arg6;
@end
