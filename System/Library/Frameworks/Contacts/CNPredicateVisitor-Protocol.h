//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class CNPredicate, NSCompoundPredicate, NSPredicate;

@protocol CNPredicateVisitor <NSObject>
- (void)visitNSPredicate:(NSPredicate *)arg1;
- (void)visitNSCompoundPredicate:(NSCompoundPredicate *)arg1;
- (void)visitCNPredicate:(CNPredicate *)arg1;
@end
