//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ABSContactsShadow, ABSContactsSource, ABSValidationSyncObject, NDTResultsFIFO, NSString, NSThread;

@interface ABSLasordaSession
{
    NSThread *_producerThread;	// 8 = 0x8
    NDTResultsFIFO *_fifo;	// 16 = 0x10
    ABSContactsShadow *_shadow;	// 24 = 0x18
    struct ct_green_tea_logger_s *_gtLogger;	// 32 = 0x20
    ABSValidationSyncObject *_startCensus;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    _Bool _sessionSupportsContactAccountIDs;	// 56 = 0x38
    NSString *_favsSha;	// 64 = 0x40
    NSString *_acctsSha;	// 72 = 0x48
    _Bool _isReset;	// 80 = 0x50
    ABSContactsSource *_contactsSource;	// 88 = 0x58
    unsigned long long _delayUs;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000002e0f9
@property(nonatomic) unsigned long long delayUs; // @synthesize delayUs=_delayUs;
@property(retain, nonatomic) ABSContactsSource *contactsSource; // @synthesize contactsSource=_contactsSource;
- (void)terminate;	// IMP=0x001000000002e05b
- (void)dealloc;	// IMP=0x001000000002e01a
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x001000000002de12
- (void)_batchSupplier;	// IMP=0x001000000002d9c6
- (void)_presentAlert;	// IMP=0x001000000002d9c0
- (unsigned int);	// IMP=0x001000000002ccd0
- (void)lateSetupForSession:(id)arg1;	// IMP=0x001000000002ca2c

@end

