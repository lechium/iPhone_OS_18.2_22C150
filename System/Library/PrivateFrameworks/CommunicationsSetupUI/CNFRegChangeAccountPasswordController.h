//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CNFRegChangeAccountPasswordDelegate;

__attribute__((visibility("hidden")))
@interface CNFRegChangeAccountPasswordController
{
    id <CNFRegChangeAccountPasswordDelegate> _delegate;	// 72 = 0x48
    NSString *_appleID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000059aad
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) id <CNFRegChangeAccountPasswordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x00000000000599c6
- (void)cancelTapped;	// IMP=0x000000000005997a
- (id)overrideURLForURL:(id)arg1;	// IMP=0x000000000005979f
- (id)logName;	// IMP=0x0000000000059792
- (id)bagKey;	// IMP=0x000000000005973b
- (_Bool)canSendURLRequest:(id)arg1;	// IMP=0x00000000000595d7
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x0000000000059519
- (void)dealloc;	// IMP=0x00000000000594db
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;	// IMP=0x0000000000059469

@end
