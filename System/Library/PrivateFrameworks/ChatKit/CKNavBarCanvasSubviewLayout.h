//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKNavBarCanvasSubviewLayout : NSObject
{
    struct CGRect _leftItemFrame;	// 8 = 0x8
    struct CGRect _rightItemFrame;	// 40 = 0x28
    struct CGRect _titleFrame;	// 72 = 0x48
    struct CGRect _subtitleFrame;	// 104 = 0x68
    struct CGRect _statusIndicatorFrame;	// 136 = 0x88
}

+ (id)layoutWithTitleFrame:(struct CGRect)arg1 subtitleFrame:(struct CGRect)arg2 leftItemFrame:(struct CGRect)arg3 rightItemFrame:(struct CGRect)arg4 statusIndicatorFrame:(struct CGRect)arg5;	// IMP=0x006000000051f774
@property(readonly, nonatomic) struct CGRect statusIndicatorFrame; // @synthesize statusIndicatorFrame=_statusIndicatorFrame;
@property(readonly, nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(readonly, nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) struct CGRect rightItemFrame; // @synthesize rightItemFrame=_rightItemFrame;
@property(readonly, nonatomic) struct CGRect leftItemFrame; // @synthesize leftItemFrame=_leftItemFrame;
- (id)initWithTitleFrame:(struct CGRect)arg1 subtitleFrame:(struct CGRect)arg2 leftItemFrame:(struct CGRect)arg3 rightItemFrame:(struct CGRect)arg4 statusIndicatorFrame:(struct CGRect)arg5;	// IMP=0x000000000051f813

@end

