//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, PDIterate;

__attribute__((visibility("hidden")))
@interface PDTimeNode : NSObject
{
    NSMutableArray *mStartTimeConditions;	// 8 = 0x8
    NSMutableArray *mEndTimeConditions;	// 16 = 0x10
    NSMutableArray *mChildTimeNodeList;	// 24 = 0x18
    NSMutableArray *mSubTimeNodeList;	// 32 = 0x20
    PDIterate *mIterate;	// 40 = 0x28
    int mType;	// 48 = 0x30
    int mAnimationPresetClass;	// 52 = 0x34
    _Bool mHasPresetId;	// 56 = 0x38
    int mPresetId;	// 60 = 0x3c
    _Bool mHasPresetSubType;	// 64 = 0x40
    int mPresetSubType;	// 68 = 0x44
    _Bool mHasRepeatCount;	// 72 = 0x48
    int mRepeatCount;	// 76 = 0x4c
    _Bool mHasRepeatDuration;	// 80 = 0x50
    int mRepeatDuration;	// 84 = 0x54
    int mRestartType;	// 88 = 0x58
    _Bool mHasDuration;	// 92 = 0x5c
    double mDuration;	// 96 = 0x60
    _Bool mHasSpeed;	// 104 = 0x68
    double mSpeed;	// 112 = 0x70
    _Bool mHasAcceleration;	// 120 = 0x78
    double mAcceleration;	// 128 = 0x80
    _Bool mHasDeceleration;	// 136 = 0x88
    double mDeceleration;	// 144 = 0x90
    _Bool mHasDisplay;	// 152 = 0x98
    _Bool mDisplay;	// 153 = 0x99
    _Bool mHasFillType;	// 154 = 0x9a
    int mFillType;	// 156 = 0x9c
    NSString *mGroupId;	// 160 = 0xa0
    NSDictionary *attributeMap;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000043a13a
@property(retain, nonatomic) NSDictionary *attributeMap; // @synthesize attributeMap;
- (id)description;	// IMP=0x000000000043a0db
- (unsigned long long)hash;	// IMP=0x000000000043a05a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000439ab2
- (void)setDisplay:(_Bool)arg1;	// IMP=0x0000000000439a9f
- (_Bool)display;	// IMP=0x0000000000439a93
- (_Bool)hasDisplay;	// IMP=0x0000000000439a87
- (void)setGroupIdValue:(int)arg1;	// IMP=0x00000000004399f4
- (void)setGroupId:(id)arg1;	// IMP=0x00000000001dc306
- (id)groupId;	// IMP=0x00000000004399e3
- (void)setFillType:(int)arg1;	// IMP=0x00000000004399d0
- (int)fillType;	// IMP=0x00000000004399c4
- (_Bool)hasFillType;	// IMP=0x00000000004399b8
- (void)setDeceleration:(double)arg1;	// IMP=0x00000000001d260a
- (double)deceleration;	// IMP=0x00000000004399aa
- (_Bool)hasDeceleration;	// IMP=0x000000000043999e
- (void)setAcceleration:(double)arg1;	// IMP=0x00000000001d25f8
- (double)acceleration;	// IMP=0x0000000000439990
- (_Bool)hasAcceleration;	// IMP=0x0000000000439987
- (void)setSpeed:(double)arg1;	// IMP=0x0000000000439978
- (double)speed;	// IMP=0x000000000043996d
- (_Bool)hasSpeed;	// IMP=0x0000000000439964
- (void)setDuration:(double)arg1;	// IMP=0x00000000001d2d31
- (double)duration;	// IMP=0x0000000000439948
- (_Bool)hasDuration;	// IMP=0x000000000043993f
- (void)setRestartType:(int)arg1;	// IMP=0x00000000001d00f8
- (int)restartType;	// IMP=0x0000000000439936
- (_Bool)hasRestartType;	// IMP=0x000000000043991e
- (void)setRepeatDuration:(int)arg1;	// IMP=0x0000000000439911
- (int)repeatDuration;	// IMP=0x0000000000439900
- (_Bool)hasRepeatDuration;	// IMP=0x00000000004398f7
- (void)setRepeatCount:(int)arg1;	// IMP=0x0000000000226ae0
- (int)repeatCount;	// IMP=0x00000000004398ee
- (_Bool)hasRepeatCount;	// IMP=0x00000000004398e5
- (void)setPresetId:(int)arg1;	// IMP=0x00000000001d25eb
- (int)presetId;	// IMP=0x00000000004398dc
- (_Bool)hasPresetId;	// IMP=0x00000000004398d3
- (void)setPresetSubType:(int)arg1;	// IMP=0x00000000001d25de
- (int)presetSubType;	// IMP=0x00000000004398ca
- (_Bool)hasPresetSubType;	// IMP=0x00000000004398c1
- (void)setAnimationPresetClass:(int)arg1;	// IMP=0x00000000001d25d5
- (int)animationPresetClass;	// IMP=0x00000000004398b8
- (_Bool)hasPresetClass;	// IMP=0x00000000004398a0
- (void)setType:(int)arg1;	// IMP=0x00000000001d0026
- (int)type;	// IMP=0x0000000000439897
- (_Bool)hasType;	// IMP=0x000000000043987f
- (void)setIterate:(id)arg1;	// IMP=0x00000000001e91fc
- (id)iterate;	// IMP=0x0000000000439871
- (void)setSubTimeNodeList:(id)arg1;	// IMP=0x0000000000439860
- (id)subTimeNodeList;	// IMP=0x0000000000439852
- (void)setChildTimeNodeList:(id)arg1;	// IMP=0x00000000001d37c7
- (id)childTimeNodeList;	// IMP=0x0000000000439844
- (void)setEndTimeConditions:(id)arg1;	// IMP=0x0000000000439833
- (id)endTimeConditions;	// IMP=0x0000000000439825
- (void)setStartTimeConditions:(id)arg1;	// IMP=0x00000000001d24ee
- (id)startTimeConditions;	// IMP=0x0000000000439817
- (id)init;	// IMP=0x00000000001cf96d
- (long long)writeRepeatCount;	// IMP=0x00000000004413cb
- (long long)writeDuration;	// IMP=0x00000000004413b5

@end
