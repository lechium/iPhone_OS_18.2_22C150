//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject
{
    unsigned int mId;	// 8 = 0x8
    NSString *mName;	// 16 = 0x10
    NSString *mInitials;	// 24 = 0x18
    unsigned int mLastCommentIndex;	// 32 = 0x20
    unsigned int mColorIndex;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000043cb82
- (id)description;	// IMP=0x000000000043cb44
- (void)setColorIndex:(unsigned int)arg1;	// IMP=0x00000000001f5ae6
- (unsigned int)colorIndex;	// IMP=0x000000000043cb3b
- (void)setLastCommentIndex:(unsigned int)arg1;	// IMP=0x000000000043cb32
- (unsigned int)lastCommentIndex;	// IMP=0x000000000043cb29
- (void)setInitials:(id)arg1;	// IMP=0x00000000001f5ad5
- (id)initials;	// IMP=0x000000000043cb1b
- (void)setName:(id)arg1;	// IMP=0x00000000001f5ac4
- (id)name;	// IMP=0x000000000043cb0d
- (void)setId:(unsigned int)arg1;	// IMP=0x00000000001f5abb
- (unsigned int)id;	// IMP=0x000000000043cb04
- (id)init;	// IMP=0x00000000001f5a78

@end

