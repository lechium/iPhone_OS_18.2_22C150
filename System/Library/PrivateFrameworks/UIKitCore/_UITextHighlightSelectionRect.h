//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

__attribute__((visibility("hidden")))
@interface _UITextHighlightSelectionRect : UITextSelectionRect
{
    _Bool _containsStart;	// 8 = 0x8
    _Bool _containsEnd;	// 9 = 0x9
    struct CGRect _rect;	// 16 = 0x10
}

+ (id)endingSelectionRectWithRect:(struct CGRect)arg1;	// IMP=0x00600000004d2eb1
+ (id)startingSelectionRectWithRect:(struct CGRect)arg1;	// IMP=0x00600000004d2e73
+ (id)selectionRectWithRect:(struct CGRect)arg1;	// IMP=0x00600000004d2e42
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;

@end
