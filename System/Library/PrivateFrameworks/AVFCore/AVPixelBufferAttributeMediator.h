//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVPixelBufferAttributeMediator : NSObject
{
    struct OpaqueVTPixelBufferAttributesMediator *_mediator;	// 8 = 0x8
}

- (id)mediatedPixelBufferAttributes;	// IMP=0x000000000015b189
- (void)setLayersAreSuppressed:(_Bool)arg1;	// IMP=0x000000000015b15a
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;	// IMP=0x000000000015b116
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000015b0ac
- (void)dealloc;	// IMP=0x000000000015b03f
- (id)init;	// IMP=0x000000000015af4c

@end

