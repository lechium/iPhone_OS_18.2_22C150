//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/NSObject-Protocol.h>

@class CNSaveRequest;

@protocol DACardDAVRecord <NSObject>
- (void)markForDeletion;
- (void)updateSaveRequest:(CNSaveRequest *)arg1;
- (_Bool)isAccount;
- (_Bool)isContainer;
- (_Bool)isGroup;
- (_Bool)isContact;
@end
