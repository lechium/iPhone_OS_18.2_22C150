//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UITextCompletionView : UIView
{
    NSString *_string;	// 160 = 0xa0
    int _type;	// 168 = 0xa8
    int _edgeType;	// 172 = 0xac
    UIFont *_textFont;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000db5bed
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000db5b94
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000db5b0a
- (struct CGRect)_calculateRectForExpandedHitRegion;	// IMP=0x0000000000db5a23
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000db5478
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;	// IMP=0x0000000000db50a8

@end
