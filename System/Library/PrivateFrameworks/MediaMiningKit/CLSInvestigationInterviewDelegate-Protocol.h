//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLSInvestigation, NSIndexSet;

@protocol CLSInvestigationInterviewDelegate <NSObject>

@optional
- (NSIndexSet *)sampleOfItemsInInvestigation:(CLSInvestigation *)arg1;
- (unsigned long long)numberOfItemsInInvestigation:(CLSInvestigation *)arg1;
@end
