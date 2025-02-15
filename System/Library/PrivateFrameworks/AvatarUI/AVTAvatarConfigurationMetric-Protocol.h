//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarConfiguration;

@protocol AVTAvatarConfigurationMetric <NSObject>
- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
- (long long)gapFromDistance:(unsigned long long)arg1;
- (unsigned long long)distanceFromConfiguration:(AVTAvatarConfiguration *)arg1 toConfiguration:(AVTAvatarConfiguration *)arg2;
@end

