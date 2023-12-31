#pragma once

// generated by ../../sqlpp11/scripts/ddl2cpp -fail-on-parse FpSample.sql FpSample fp

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace FpSample_
{
  struct Id
  {
    struct _alias_t
    {
      static constexpr const char _literal[] = "id";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template <typename T>
      struct _member_t
      {
        T id;
        T& operator()()
        {
          return id;
        }
        const T& operator()() const
        {
          return id;
        }
      };
    };
    using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
  };
  struct Fp
  {
    struct _alias_t
    {
      static constexpr const char _literal[] = "fp";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template <typename T>
      struct _member_t
      {
        T fp;
        T& operator()()
        {
          return fp;
        }
        const T& operator()() const
        {
          return fp;
        }
      };
    };
    using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::can_be_null>;
  };
}

struct FpSample : sqlpp::table_t<FpSample, FpSample_::Id, FpSample_::Fp>
{
  struct _alias_t
  {
    static constexpr const char _literal[] = "fp_sample";
    using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
    template <typename T>
    struct _member_t
    {
      T fpSample;
      T& operator()()
      {
        return fpSample;
      }
      const T& operator()() const
      {
        return fpSample;
      }
    };
  };
};
