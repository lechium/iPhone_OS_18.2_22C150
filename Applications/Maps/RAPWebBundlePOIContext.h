//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface RAPWebBundlePOIContext
{
    _Bool _permanentClosed;	// 8 = 0x8
    _Bool _temporaryClosed;	// 9 = 0x9
    _Bool _acceptsApplePay;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_url;	// 32 = 0x20
    NSArray *_categories;	// 40 = 0x28
    NSArray *_businessHours;	// 48 = 0x30
    NSArray *_transitInfos;	// 56 = 0x38
    NSArray *_containedInPlaces;	// 64 = 0x40
    NSArray *_containsPlaces;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000044937d
@property(retain, nonatomic) NSArray *containsPlaces; // @synthesize containsPlaces=_containsPlaces;
@property(retain, nonatomic) NSArray *containedInPlaces; // @synthesize containedInPlaces=_containedInPlaces;
@property(retain, nonatomic) NSArray *transitInfos; // @synthesize transitInfos=_transitInfos;
@property(nonatomic) _Bool acceptsApplePay; // @synthesize acceptsApplePay=_acceptsApplePay;
@property(nonatomic) _Bool temporaryClosed; // @synthesize temporaryClosed=_temporaryClosed;
@property(nonatomic) _Bool permanentClosed; // @synthesize permanentClosed=_permanentClosed;
@property(retain, nonatomic) NSArray *businessHours; // @synthesize businessHours=_businessHours;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)context;	// IMP=0x00100000004487a4

@end

