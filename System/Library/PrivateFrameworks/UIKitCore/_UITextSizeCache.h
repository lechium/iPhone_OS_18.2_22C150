//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000189c09e
- (void).cxx_destruct;	// IMP=0x000000000189c082
- (id)description;	// IMP=0x000000000189be46
- (void)removeAllSizes;	// IMP=0x000000000189be38
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_3ae44ac1 *)arg2 forTargetSize:(struct CGSize)arg3;	// IMP=0x000000000189b91a
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_3ae44ac1 *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;	// IMP=0x000000000189b794

@end

