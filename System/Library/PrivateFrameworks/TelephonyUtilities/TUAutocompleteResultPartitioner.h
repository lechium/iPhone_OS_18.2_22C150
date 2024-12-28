//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TUSearchController;

__attribute__((visibility("hidden")))
@interface TUAutocompleteResultPartitioner : NSObject
{
    TUSearchController *_searchController;	// 8 = 0x8
    NSMutableArray *_normalResultsArray;	// 16 = 0x10
    NSMutableArray *_foundInMailResultsArray;	// 24 = 0x18
    NSMutableArray *_foundOnServersResultsArray;	// 32 = 0x20
}

+ (_Bool)sourceTypeIsFoundOnServers:(unsigned long long)arg1;	// IMP=0x0060000000100946
+ (_Bool)sourceTypeIsFoundInMail:(unsigned long long)arg1;	// IMP=0x0060000000100937
- (void).cxx_destruct;	// IMP=0x00000000001009cb
@property(retain, nonatomic) NSMutableArray *foundOnServersResultsArray; // @synthesize foundOnServersResultsArray=_foundOnServersResultsArray;
@property(retain, nonatomic) NSMutableArray *foundInMailResultsArray; // @synthesize foundInMailResultsArray=_foundInMailResultsArray;
@property(retain, nonatomic) NSMutableArray *normalResultsArray; // @synthesize normalResultsArray=_normalResultsArray;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
- (void)addResult:(id)arg1;	// IMP=0x0000000000100836
- (id)init;	// IMP=0x0000000000100798
- (id)searchResults;	// IMP=0x0000000000100a07

@end
