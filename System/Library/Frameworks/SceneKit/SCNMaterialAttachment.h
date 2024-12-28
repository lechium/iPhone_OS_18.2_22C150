//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNMaterialAttachment : NSObject
{
    unsigned int glID;	// 8 = 0x8
    unsigned int target;	// 12 = 0xc
    void *context;	// 16 = 0x10
    struct CGSize size;	// 24 = 0x18
    NSDictionary *options;	// 40 = 0x28
}

+ (id)materialAttachmentWithGLKTextureInfo:(id)arg1;	// IMP=0x00600000001ef753
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) void *context; // @synthesize context;
@property(nonatomic) unsigned int target; // @synthesize target;
@property(nonatomic) unsigned int glID; // @synthesize glID;
- (void)dealloc;	// IMP=0x00000000001ef718

@end
