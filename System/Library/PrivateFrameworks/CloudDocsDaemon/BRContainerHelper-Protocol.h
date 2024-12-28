//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRContainer, BRMangledID, NSDictionary, NSString, NSURL;
@protocol BRContainerHelper;

@protocol BRContainerHelper <NSObject>
+ (id <BRContainerHelper>)sharedHelper;
- (NSString *)itemIDForURL:(NSURL *)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 error:(id *)arg3;
- (BRContainer *)fetchContainerForMangledID:(BRMangledID *)arg1 personaID:(NSString *)arg2;
- (NSDictionary *)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;
@end
