//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SFAccountTableConfiguration : NSObject
{
    _Bool _shouldShowSearchBar;	// 8 = 0x8
    _Bool _supportsDelete;	// 9 = 0x9
    _Bool _supportsShare;	// 10 = 0xa
    _Bool _shouldConfigureMultipleSelectionDuringEditing;	// 11 = 0xb
    _Bool _supportsOngoingCredentialSharing;	// 12 = 0xc
    _Bool _isForFillingIndividualAccountFields;	// 13 = 0xd
}

@property(nonatomic) _Bool isForFillingIndividualAccountFields; // @synthesize isForFillingIndividualAccountFields=_isForFillingIndividualAccountFields;
@property(nonatomic) _Bool supportsOngoingCredentialSharing; // @synthesize supportsOngoingCredentialSharing=_supportsOngoingCredentialSharing;
@property(nonatomic) _Bool shouldConfigureMultipleSelectionDuringEditing; // @synthesize shouldConfigureMultipleSelectionDuringEditing=_shouldConfigureMultipleSelectionDuringEditing;
@property(nonatomic) _Bool supportsShare; // @synthesize supportsShare=_supportsShare;
@property(nonatomic) _Bool supportsDelete; // @synthesize supportsDelete=_supportsDelete;
@property(nonatomic) _Bool shouldShowSearchBar; // @synthesize shouldShowSearchBar=_shouldShowSearchBar;

@end

