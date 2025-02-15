//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface MailPersistentStorage : NSObject
{
    NSString *_filePath;	// 8 = 0x8
    NSMutableDictionary *_groups;	// 16 = 0x10
    NSOperationQueue *_saveOperationQueue;	// 24 = 0x18
}

+ (void)wipePersistentStorage;	// IMP=0x004000000003ff97
+ (id)sharedStorage;	// IMP=0x001000000003fee9
+ (id)defaultFilePath;	// IMP=0x001000000003fe87
- (void).cxx_destruct;	// IMP=0x0020000000040d6f
@property(retain, nonatomic) NSOperationQueue *saveOperationQueue; // @synthesize saveOperationQueue=_saveOperationQueue;
- (void)removeAllDataBelongingToAccount:(id)arg1;	// IMP=0x00100000000408d7
- (id)sceneRestorationDictionary;	// IMP=0x00100000000408b7
- (void)setSceneRestorationDictionary:(id)arg1;	// IMP=0x0010000000040897
- (id)searchedServerDate;	// IMP=0x0010000000040877
- (void)clearSearchedServer;	// IMP=0x0010000000040855
- (void)searchedServer;	// IMP=0x00100000000407e0
- (id)lastLoadOlder;	// IMP=0x00100000000407c0
- (void)clearLastLoadOlder;	// IMP=0x001000000004079e
- (void)touchLastLoadOlder;	// IMP=0x0010000000040729
- (id)bodyBackfillDateForSource:(id)arg1;	// IMP=0x00100000000406bb
- (void)setBodyBackfillDate:(id)arg1 forSource:(id)arg2;	// IMP=0x0010000000040634
- (id)lastAdditionalMailboxesFetchDate;	// IMP=0x0010000000040614
- (void)setLastAdditionalMailboxesFetchDate:(id)arg1;	// IMP=0x00100000000405f4
- (id)fetchDateForSource:(id)arg1;	// IMP=0x0010000000040586
- (void)setFetchDate:(id)arg1 forSource:(id)arg2;	// IMP=0x00100000000404ff
- (id)_objectForKey:(id)arg1 inGroup:(id)arg2;	// IMP=0x00100000000403c0
- (void)_setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3;	// IMP=0x0010000000040236
- (void)save;	// IMP=0x0010000000040178
- (id)init;	// IMP=0x0010000000040102
- (id)initWithFilePath:(id)arg1;	// IMP=0x001000000003ffb9

@end

