//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISVectorGlyphDrawing;

@interface PBSystemInputAssistantPasteButtonDrawing : NSObject
{
    UISVectorGlyphDrawing *_glyph;	// 8 = 0x8
    struct CGPoint _glyphOffset;	// 16 = 0x10
    struct CGSize _size;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001fd52
- (void)drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000001fd2f
@property(readonly, nonatomic) struct CGSize drawingSize;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;	// IMP=0x001000000001fb69

// Remaining properties
@property(readonly, nonatomic) struct CGRect alignmentRect;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

