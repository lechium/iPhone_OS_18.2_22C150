//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UISSlotEmptyContent : NSObject
{
    struct CGSize _contentSize;	// 8 = 0x8
}

+ (id)contentWithSize:(struct CGSize)arg1;	// IMP=0x006000000001d5b3
- (id)image;	// IMP=0x000000000001d674
- (void)deleteFromLayerContext:(id)arg1;	// IMP=0x000000000001d66e
- (_Bool)shouldReplaceExistingContent;	// IMP=0x000000000001d666
- (_Bool)isRemote;	// IMP=0x000000000001d65e
- (struct CGSize)contentSize;	// IMP=0x000000000001d64e
- (unsigned char)contentScale;	// IMP=0x000000000001d643
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000001d5f1

@end
