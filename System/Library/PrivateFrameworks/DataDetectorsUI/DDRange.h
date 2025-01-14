//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface DDRange : NSObject
{
    DOMNode *_node;	// 8 = 0x8
    long long _startOffset;	// 16 = 0x10
    long long _endOffset;	// 24 = 0x18
}

+ (id)rangeWithDOMRange:(id)arg1;	// IMP=0x006000000002bfcb
- (void).cxx_destruct;	// IMP=0x000000000002c0bb
@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (id)description;	// IMP=0x000000000002c043
- (void)dealloc;	// IMP=0x000000000002c014
- (id)initWithDOMRange:(id)arg1;	// IMP=0x000000000002bf22

@end

