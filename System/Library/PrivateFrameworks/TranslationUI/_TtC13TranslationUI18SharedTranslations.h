//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

@interface _TtC13TranslationUI18SharedTranslations : NSObject
{
    MISSING_TYPE *presentedItemOperationQueue;	// 8 = 0x8
    MISSING_TYPE *presentedItemURL;	// 0 = 0x0
    MISSING_TYPE *translations;	// 0 = 0x0
    MISSING_TYPE *presentedItemChangedAction;	// 0 = 0x0
    MISSING_TYPE *fileAccessQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000076920
- (id)init;	// IMP=0x0000000000079f40
- (void)presentedItemDidChange;	// IMP=0x0000000000079ec0
- (void)dealloc;	// IMP=0x00000000000768e0
@property(nonatomic, copy) NSURL *presentedItemURL;
@property(nonatomic, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue;

@end

