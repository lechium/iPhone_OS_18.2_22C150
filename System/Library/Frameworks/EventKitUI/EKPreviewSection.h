//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface EKPreviewSection : NSObject
{
    NSArray *_events;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

+ (id)sectionWithDate:(id)arg1;	// IMP=0x00600000000729dc
- (void).cxx_destruct;	// IMP=0x0000000000072b84
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (void)addEvent:(id)arg1;	// IMP=0x0000000000072a90
- (id)initWithDate:(id)arg1;	// IMP=0x0000000000072a25

@end

