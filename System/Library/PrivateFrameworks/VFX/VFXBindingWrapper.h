//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _TtP3VFX10VFXBinding_;

@interface VFXBindingWrapper : NSObject
{
    short type;	// 8 = 0x8
    id <_TtP3VFX10VFXBinding_> binding;	// 16 = 0x10
    long long index;	// 24 = 0x18
}

@property(nonatomic) short type; // @synthesize type;
@property(nonatomic) long long index; // @synthesize index;
@property(retain, nonatomic) id <_TtP3VFX10VFXBinding_> binding; // @synthesize binding;
- (void)dealloc;	// IMP=0x00000000001a19dc

@end
