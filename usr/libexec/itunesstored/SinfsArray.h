//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x002000000002c4b2
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002c437
- (id)sinfs;	// IMP=0x001000000002c420
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002c24e
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000002c17f
- (void)dealloc;	// IMP=0x001000000002c144
- (id)initWithSINFs:(id)arg1;	// IMP=0x001000000002c083
- (id)init;	// IMP=0x001000000002c06f

@end
