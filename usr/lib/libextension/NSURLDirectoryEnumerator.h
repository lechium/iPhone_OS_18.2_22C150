//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDirectoryEnumerator.h"

__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __CFURLEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
    _Bool shouldContinue;	// 24 = 0x18
    _Bool isPostOrderDirectory;	// 25 = 0x19
}

@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)dealloc;	// IMP=0x000000000076d908
- (_Bool)isEnumeratingDirectoryPostOrder;	// IMP=0x000000000076d8f8
- (id)directoryAttributes;	// IMP=0x000000000076d8f0
- (id)fileAttributes;	// IMP=0x000000000076d8e8
- (unsigned long long)level;	// IMP=0x000000000076d8d3
- (void)skipDescendants;	// IMP=0x000000000076d8be
- (void)skipDescendents;	// IMP=0x000000000076d8ac
- (id)nextObject;	// IMP=0x000000000076d726
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000076d634

@end
