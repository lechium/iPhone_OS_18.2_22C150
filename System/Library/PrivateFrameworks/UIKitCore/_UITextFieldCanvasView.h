//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UITextFieldCanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextFieldCanvasView
{
}

- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000176b337
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000000176af3f
- (_Bool)_enableAutoConstraining;	// IMP=0x000000000176af37
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000176aef3
- (id)init;	// IMP=0x000000000176ae09

// Remaining properties
@property(nonatomic) __weak id <_UITextFieldCanvasContext> context; // @dynamic context;

@end

