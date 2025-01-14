//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrivacyAccounting/NSObject-Protocol.h>

@class NSDate, NSNumber, NSString;

@protocol PAAccessEventRecord <NSObject>
@property(readonly) NSNumber *accessCount;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly) long long timing;
@property(readonly) NSString *category;
@property(readonly) NSString *accessorBundleID;
@property(readonly) NSString *identifier;
@end

