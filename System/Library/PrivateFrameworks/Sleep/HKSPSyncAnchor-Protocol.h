//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NSCopying-Protocol.h>
#import <Sleep/NSObject-Protocol.h>
#import <Sleep/NSSecureCoding-Protocol.h>

@protocol HKSPSyncAnchor;

@protocol HKSPSyncAnchor <NSSecureCoding, NSCopying, NSObject>
- (id)hksp_increment;
- (long long)compare:(id <HKSPSyncAnchor>)arg1;
@end
