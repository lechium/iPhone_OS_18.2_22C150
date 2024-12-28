//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@protocol MIJournalEntry <NSObject, NSSecureCoding>
@property(readonly, nonatomic) _Bool shouldPersist;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (_Bool)cleanUpJournaledDataOnDiskWithError:(id *)arg1;
- (_Bool)finalizeWithError:(id *)arg1;
@end
