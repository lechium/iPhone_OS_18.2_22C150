//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EXOSExtensionEnumerator : NSEnumerator
{
    NSArray *_extensionPaths;	// 8 = 0x8
    NSEnumerator *_extensionPathsEnumerator;	// 16 = 0x10
}

+ (void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030555
- (void).cxx_destruct;	// IMP=0x0000000000031245
@property(readonly) NSEnumerator *extensionPathsEnumerator; // @synthesize extensionPathsEnumerator=_extensionPathsEnumerator;
@property(readonly) NSArray *extensionPaths; // @synthesize extensionPaths=_extensionPaths;
- (id)nextObject;	// IMP=0x00000000000311a9
- (id)initWithCacheURLs:(id)arg1 paths:(id)arg2;	// IMP=0x0000000000030b35
- (id)initWithCacheURLs:(id)arg1;	// IMP=0x0000000000030b1c

@end
