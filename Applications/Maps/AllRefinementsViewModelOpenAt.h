//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AllRefinementsViewModelOpenAt : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    _Bool _isNextDay;	// 9 = 0x9
    NSString *_displayName;	// 16 = 0x10
    double _timeStamp;	// 24 = 0x18
    id _data;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000bf1153
@property(readonly, nonatomic) id data; // @synthesize data=_data;
@property(readonly, nonatomic) _Bool isNextDay; // @synthesize isNextDay=_isNextDay;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)updateTimeStamp:(double)arg1 isSelected:(_Bool)arg2;	// IMP=0x0010000000bf1114
- (id)initWithDisplayName:(id)arg1 timeStamp:(double)arg2 isSelected:(_Bool)arg3 isNextDay:(_Bool)arg4 data:(id)arg5;	// IMP=0x0010000000bf1054
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000bf0f7e

@end

