//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject
{
    DOMHTMLOptGroupElement *_node;	// 8 = 0x8
}

@property(retain, nonatomic) DOMHTMLOptGroupElement *_node; // @synthesize _node;
- (void)dealloc;	// IMP=0x0000000000b56fd4
- (void)unselect;	// IMP=0x0000000000b56fce
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000b56fc8
- (_Bool)isGroup;	// IMP=0x0000000000b56fc0
- (_Bool)selected;	// IMP=0x0000000000b56fb8
- (id)node;	// IMP=0x0000000000b56fae
- (id)initWithHTMLOptGroupNode:(id)arg1;	// IMP=0x0000000000b56f58

@end

