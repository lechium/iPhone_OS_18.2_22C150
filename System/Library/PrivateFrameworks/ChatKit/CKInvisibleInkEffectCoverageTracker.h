//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol CKInvisibleInkEffectCoverageTrackerDelegate;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkEffectCoverageTracker : NSObject
{
    double *_expiryTimes;	// 8 = 0x8
    unsigned long long _width;	// 16 = 0x10
    unsigned long long _height;	// 24 = 0x18
    double _cellWidth;	// 32 = 0x20
    double _cellHeight;	// 40 = 0x28
    NSTimer *_recoverTimer;	// 48 = 0x30
    _Bool _uncovered;	// 56 = 0x38
    id <CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;	// 64 = 0x40
    double _touchLifetime;	// 72 = 0x48
    struct CGSize _size;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000035b16c
@property(nonatomic, getter=isUncovered) _Bool uncovered; // @synthesize uncovered=_uncovered;
@property(readonly, nonatomic) double touchLifetime; // @synthesize touchLifetime=_touchLifetime;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <CKInvisibleInkEffectCoverageTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_checkForCover:(id)arg1;	// IMP=0x000000000035af65
- (void)recordTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000035ac4f
- (void)reset;	// IMP=0x000000000035ab23
- (void)dealloc;	// IMP=0x000000000035a98f
- (id)initWithSize:(struct CGSize)arg1 touchLifetime:(double)arg2;	// IMP=0x000000000035a920

@end

