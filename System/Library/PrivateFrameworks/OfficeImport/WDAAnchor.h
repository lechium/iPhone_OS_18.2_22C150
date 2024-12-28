//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAAnchor : NSObject
{
    struct CGRect mBounds;	// 8 = 0x8
    int mTextWrappingMode;	// 40 = 0x28
    int mTextWrappingModeType;	// 44 = 0x2c
    NSArray *mTextWrapPoints;	// 48 = 0x30
    double mWrapDistanceLeft;	// 56 = 0x38
    double mWrapDistanceTop;	// 64 = 0x40
    double mWrapDistanceRight;	// 72 = 0x48
    double mWrapDistanceBottom;	// 80 = 0x50
    int mHorizontalPosition;	// 88 = 0x58
    int mRelativeHorizontalPosition;	// 92 = 0x5c
    int mVerticalPosition;	// 96 = 0x60
    int mRelativeVerticalPosition;	// 100 = 0x64
    _Bool mAllowOverlap;	// 104 = 0x68
    long long mZIndex;	// 112 = 0x70
}

+ (id)stringForTextWrappingModeType:(int)arg1;	// IMP=0x00600000003e2821
- (void).cxx_destruct;	// IMP=0x00000000003e28eb
@property(nonatomic) long long zIndex; // @synthesize zIndex=mZIndex;
@property(nonatomic) _Bool allowOverlap; // @synthesize allowOverlap=mAllowOverlap;
@property(nonatomic) int relativeVerticalPosition; // @synthesize relativeVerticalPosition=mRelativeVerticalPosition;
@property(nonatomic) int verticalPosition; // @synthesize verticalPosition=mVerticalPosition;
@property(nonatomic) int relativeHorizontalPosition; // @synthesize relativeHorizontalPosition=mRelativeHorizontalPosition;
@property(nonatomic) int horizontalPosition; // @synthesize horizontalPosition=mHorizontalPosition;
@property(nonatomic) double wrapDistanceBottom; // @synthesize wrapDistanceBottom=mWrapDistanceBottom;
@property(nonatomic) double wrapDistanceTop; // @synthesize wrapDistanceTop=mWrapDistanceTop;
@property(nonatomic) double wrapDistanceRight; // @synthesize wrapDistanceRight=mWrapDistanceRight;
@property(nonatomic) double wrapDistanceLeft; // @synthesize wrapDistanceLeft=mWrapDistanceLeft;
@property(retain, nonatomic) NSArray *textWrapPoints; // @synthesize textWrapPoints=mTextWrapPoints;
@property(nonatomic) int textWrappingModeType; // @synthesize textWrappingModeType=mTextWrappingModeType;
@property(nonatomic) int textWrappingMode; // @synthesize textWrappingMode=mTextWrappingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (id)description;	// IMP=0x00000000003e2842
- (id)init;	// IMP=0x0000000000157ec0

@end
