//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CAAnimationDelegate.h"
#import "WCGiftCardDetailViewDelegate.h"

@class NSString, UIScrollView, WCGiftCardData, WCGiftCardDetailView, WCGiftCardEnvelopeView, WCPreGiftCardData;

@interface WCGiftCardViewController : MMUIViewController <CAAnimationDelegate, WCGiftCardDetailViewDelegate>
{
    unsigned int _bizUin;
    NSString *_currentUserName;
    WCPreGiftCardData *_preGiftCard;
    WCGiftCardData *_giftCard;
    NSString *_orderId;
    WCGiftCardEnvelopeView *_envelopeView;
    WCGiftCardDetailView *_detailView;
    long long _fromScence;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long fromScence; // @synthesize fromScence=_fromScence;
@property(retain, nonatomic) WCGiftCardDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) WCGiftCardEnvelopeView *envelopeView; // @synthesize envelopeView=_envelopeView;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(retain, nonatomic) WCGiftCardData *giftCard; // @synthesize giftCard=_giftCard;
@property(retain, nonatomic) WCPreGiftCardData *preGiftCard; // @synthesize preGiftCard=_preGiftCard;
@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
- (void).cxx_destruct;
- (void)onBack;
- (void)jumpButtonDidClikced;
- (_Bool)useTransparentNavibar;
- (void)popCon;
- (void)showConfirmAlertWithTitle:(id)arg1 sel:(SEL)arg2;
- (void)viewDidLayoutSubviews;
- (void)showCloseButton;
- (void)configDetailViewFrame;
- (void)showDetailView;
- (void)configEnvelopeViewFrame;
- (void)closeEnvelopeAndSelf;
- (void)showEnvelopeView;
- (void)handleFinshed;
- (void)handleLoading;
- (void)handleEnvelopse;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showInViewController:(id)arg1;
- (id)initWithGiftCardData:(id)arg1;
- (id)initWithBizUin:(unsigned int)arg1 orderId:(id)arg2;
- (id)initWithPreGiftCardData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

