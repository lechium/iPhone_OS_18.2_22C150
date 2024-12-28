//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDCardFileManager, PDDatabaseManager;
@protocol OS_dispatch_queue, PDPassTileManagerDelegate;

@interface PDPassTileManager : NSObject
{
    PDCardFileManager *_cardFileManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    NSMutableDictionary *_descriptorStateParticipants;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_replyQueue;	// 40 = 0x28
    id <PDPassTileManagerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000451f1e
- (id)init;	// IMP=0x0010000000450d57

@end
