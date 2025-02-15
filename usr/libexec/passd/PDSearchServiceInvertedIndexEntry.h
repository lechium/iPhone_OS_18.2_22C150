//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDecimalNumber, PKPaymentTransactionTag;

@interface PDSearchServiceInvertedIndexEntry : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    long long _category;	// 16 = 0x10
    long long _transactionType;	// 24 = 0x18
    long long _transactionStatus;	// 32 = 0x20
    unsigned long long _transactionSource;	// 40 = 0x28
    long long _peerPaymentSubType;	// 48 = 0x30
    unsigned long long _rewardsValueUnit;	// 56 = 0x38
    NSDecimalNumber *_rewardsValue;	// 64 = 0x40
    PKPaymentTransactionTag *_tag;	// 72 = 0x48
    NSDate *_date;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000302475
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) PKPaymentTransactionTag *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDecimalNumber *rewardsValue; // @synthesize rewardsValue=_rewardsValue;
@property(nonatomic) unsigned long long rewardsValueUnit; // @synthesize rewardsValueUnit=_rewardsValueUnit;
@property(nonatomic) long long peerPaymentSubType; // @synthesize peerPaymentSubType=_peerPaymentSubType;
@property(nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

