//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudSetFavoriteSongAddToLibraryBehaviorOperation
{
    long long _addToLibraryBehavior;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000ee1ce
- (void)main;	// IMP=0x00200000000edd15
- (_Bool)isPersistent;	// IMP=0x00100000000edd0d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000edc90
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000edc16
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 addToLibraryBehavior:(long long)arg3;	// IMP=0x00100000000edbd2

@end
