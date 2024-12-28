//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;	// 8 = 0x8
    unsigned short _characters[0];	// 12 = 0xc
}

+ (id)pathWithComponents:(id)arg1;	// IMP=0x00600000007fd9a3
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x00600000007fd55b
- (id)stringByResolvingSymlinksInPath;	// IMP=0x00000000007ff282
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;	// IMP=0x00000000007ff143
- (id)stringByStandardizingPath;	// IMP=0x00000000007ff12f
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;	// IMP=0x00000000007feffe
- (id)stringByExpandingTildeInPath;	// IMP=0x00000000007fedf5
- (id)stringByAbbreviatingWithTildeInPath;	// IMP=0x00000000007feb26
- (id)stringByAppendingPathExtension:(id)arg1;	// IMP=0x00000000007fe69d
- (id)stringByDeletingPathExtension;	// IMP=0x00000000007fe64d
- (id)pathExtension;	// IMP=0x00000000007fe564
- (id)stringByAppendingPathComponent:(id)arg1;	// IMP=0x00000000007fe1b7
- (id)stringByDeletingLastPathComponent;	// IMP=0x00000000007fe14b
- (id)lastPathComponent;	// IMP=0x00000000007fe0f0
- (_Bool)isAbsolutePath;	// IMP=0x00000000007fe0bb
- (id)pathComponents;	// IMP=0x00000000007fe097
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000007fd7e7
- (unsigned long long)hash;	// IMP=0x00000000007fd7c3
- (id)copy;	// IMP=0x00000000007fd7b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007fd7af
- (const unsigned short *)_fastCharacterContents;	// IMP=0x00000000007fd79f
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007fd6e4
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007fd648
- (unsigned long long)length;	// IMP=0x00000000007fd635

@end
