//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject
{
    id _object;	// 8 = 0x8
}

+ (id)weakReferenceWrappingObject:(id)arg1;	// IMP=0x00100000018a1da9
- (void).cxx_destruct;	// IMP=0x00000000018a1e26
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000018a1d5a
- (id)initWithObject:(id)arg1;	// IMP=0x00000000018a1cf6

@end
