//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPMediaLibraryView, NSArray;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation
{
    MPMediaLibraryView *_libraryView;	// 8 = 0x8
    Class _modelClass;	// 16 = 0x10
    NSArray *_identifierSets;	// 24 = 0x18
    NSArray *_albumArtistNamesToIdentifierSets;	// 32 = 0x20
    CDUnknownBlockType _responseHandler;	// 40 = 0x28
}

+ (_Bool)supportsModelClass:(Class)arg1;	// IMP=0x006000000021a44b
- (void).cxx_destruct;	// IMP=0x00000000002206c2
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSArray *albumArtistNamesToIdentifierSets; // @synthesize albumArtistNamesToIdentifierSets=_albumArtistNamesToIdentifierSets;
@property(copy, nonatomic) NSArray *identifierSets; // @synthesize identifierSets=_identifierSets;
@property(nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(copy, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
- (void)execute;	// IMP=0x000000000021a540

@end

