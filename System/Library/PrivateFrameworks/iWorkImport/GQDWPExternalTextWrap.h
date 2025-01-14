//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDWPExternalTextWrap : NSObject
{
    _Bool mFloatingWrapEnabled;	// 8 = 0x8
    _Bool mInlineWrapEnabled;	// 9 = 0x9
    float mMargin;	// 12 = 0xc
    float mAlphaThreshold;	// 16 = 0x10
    int mWrapStyle;	// 20 = 0x14
    int mWrapDirection;	// 24 = 0x18
    int mFloatingWrapType;	// 28 = 0x1c
    int mAttachmentWrapType;	// 32 = 0x20
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000001f86d
- (int)attachmentWrapType;	// IMP=0x000000000001f8bd
- (int)floatingWrapType;	// IMP=0x000000000001f8b4
- (int)wrapDirection;	// IMP=0x000000000001f8ab
- (int)wrapStyle;	// IMP=0x000000000001f8a2
- (float)alphaThreshold;	// IMP=0x000000000001f897
- (float)margin;	// IMP=0x000000000001f88c
- (_Bool)inlineWrapEnabled;	// IMP=0x000000000001f883
- (_Bool)floatingWrapEnabled;	// IMP=0x000000000001f87a
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x000000000001f8c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

