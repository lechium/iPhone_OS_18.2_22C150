//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLPropertyValue : NSObject
{
    _Bool _dirty;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly, retain, nonatomic) id value; // @synthesize value=_value;
- (void)dealloc;	// IMP=0x0010000000744cd8
- (id)initWithValue:(id)arg1 dirty:(_Bool)arg2;	// IMP=0x0010000000744c7e

@end

